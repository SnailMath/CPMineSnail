#ifdef PC
	#define K_QUIT		SDLK_q
	#define K_QUIT2		SDLK_DELETE
	#define K_NEW		SDLK_BACKSPACE
	#define K_ZOOM_IN	SDLK_1
	//#define K_ZOOM_IN2
	#define K_ZOOM_OUT	SDLK_2
	//#define K_ZOOM_OUT2
	#define K_MODE_CLICK	SDLK_RETURN
	#define K_MODE_CLICK2	SDLK_r
	#define K_MODE_FLAG	SDLK_e
	#define K_MODE_QUEST	SDLK_w
	#define K_MODE_QUEST2	SDLK_PERIOD
	#define K_0		SDLK_0
	#define K_1		SDLK_1
	#define K_2		SDLK_2
	#define K_3		SDLK_3
	#define K_4		SDLK_4
	#define K_5		SDLK_5
	#define K_6		SDLK_6
	#define K_7		SDLK_7
	#define K_8		SDLK_8
	#define K_9		SDLK_9
#else
	#define K_QUIT		0x0080 // POWER_Clear
	//#define K_QUIT2
	#define K_NEW		0x0097 // BACKSPACE
	#define K_ZOOM_IN	0x002B // Plus
	#define K_ZOOM_IN2	0x0031 // 1
	#define K_ZOOM_OUT	0x002D // Minus
	#define K_ZOOM_OUT2	0x0032 // 2
	#define K_MODE_CLICK	0x0094 // EXE
	//#define K_MODE_CLICK2
	#define K_MODE_FLAG	0x001D // EXP
	#define K_MODE_QUEST	0x002E // DOT
	//#define K_MODE_QUEST2
	#define K_0		0x0030 //The number keys 0-9
	#define K_1		0x0031
	#define K_2		0x0032
	#define K_3		0x0033
	#define K_4		0x0034
	#define K_5		0x0035
	#define K_6		0x0036
	#define K_7		0x0037
	#define K_8		0x0038
	#define K_9		0x0039
#endif
