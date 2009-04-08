// Logging for debug builds only.

#include "../POSIX/Common.h"

#ifdef __OBJC__

#ifdef DEBUG
	#define L0Log(x, ...) NSLog(@"<DEBUG: %s>: " x, __func__, ## __VA_ARGS__)
	#define L0LogIf(cond, x, ...) do { if (cond) L0Log(x, ## __VA_ARGS__); } while (0)
	#define L0Show(x) L0Log(@"%@", [(x) description])
#else
	#define L0Log(...)
	#define L0LogIf(...)
	#define L0Show(...)
#endif // def DEBUG

#endif // def __OBJC__