#ifndef IODEFINE_H
#define IODEFINE_H

//------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------
#define	SEP_LEFT_BLACKET			11
#define	SEP_NAME_DATA				13
#define	SEP_RIGHT_BLACKET			12
//---> ADD 2012/08/24 Encryption by KSM 
#define	USER_ACCESS_LEVEL			8
//---> END 2012/08/24 Encryption by KSM 

// ycchoi(2006.02.03)
// EDIT Button 추가(NRD요청사항)
//enum { BUTTON_NEW , BUTTON_SAVE , BUTTON_SAVEAS , BUTTON_CANCEL , BUTTON_FILE , BUTTON_EXPORT };
enum { BUTTON_NEW , BUTTON_SAVE , BUTTON_SAVEAS , BUTTON_CANCEL , BUTTON_FILE , BUTTON_EDIT_ENABLE, BUTTON_EDIT_PRESSED, BUTTON_EXPORT };

//
// IO List
//
// FA Start
typedef enum {
	////////////////// EVENT REPORT IO
	SCHEDULER				,
	//////////////////

	//---> ADD 2012/08/24 Encryption by KSM 
	CurrentUserName			,
	CurrentGroupName        ,
	SCREEN_USER_CONTROL		,
	LOGIN_USER_LEVEL		,
	//---> END 2012/08/24 Encryption by KSM 

} IOPointIndex;

//------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------

#endif
