#include <DAVE3.h>			//Declarations from DAVE3 Code Generation (includes SFR declaration)

#include "BluetoothDriver.h"
#include "timerFunctions.h"


int main(void)
{
//	status_t status;		// Declaration of return variable for DAVE3 APIs (toggle comment if required)


	DAVE_Init();			// Initialization of DAVE Apps

	initBluetooth();

	while(1)
	{
		manageConnection();
	}
	return 0;
}


