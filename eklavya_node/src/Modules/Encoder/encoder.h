#ifndef _ENCODER_H
#define _ENCODER_H

#include "../../eklavya2.h"

namespace encoder_space {
	
	class EncoderData {
		
		public:
		int leftCount;
		int rightCount;
		
	};
	
	class Encoder {
		
		
		private:
		Tserial *serialConnection;
		
		public:
		Encoder(char *port, int baudRate);
		EncoderData fetchEncoderData();
	};
}

#endif

