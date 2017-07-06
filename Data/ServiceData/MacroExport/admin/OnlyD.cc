//Generated Macro Name:	OnlyD
//Generated Time: 		May-10-2017 05:12:03
//Paste this whole file into an interface to transfer Macro functionality.
{

	uint8_t addrs[universalAddressSize_];	//create address buffer of interface size
	uint8_t data[universalDataSize_];		//create data buffer of interface size

	// universalWrite(0x1FFFFFFFF,0x1);
	{
		uint8_t macroAddrs[5] = {0xFF, 0xFF, 0xFF, 0xFF, 0x01};	//create macro address buffer
		for(unsigned int i=0;i<universalAddressSize_;++i) //fill with macro address and 0 fill
				addrs[i] = (i < 5)?macroAddrs[i]:0;

		uint8_t macroData[1] = {0x01};	//create macro data buffer
		for(unsigned int i=0;i<universalDataSize_;++i) //fill with macro address and 0 fill
				data[i] = (i < 1)?macroData[i]:0;
		universalWrite((char *)addrs,(char *)data);
	}

	// universalWrite(0x1FFFFFFFF,0x0);
	{
		uint8_t macroAddrs[5] = {0xFF, 0xFF, 0xFF, 0xFF, 0x01};	//create macro address buffer
		for(unsigned int i=0;i<universalAddressSize_;++i) //fill with macro address and 0 fill
				addrs[i] = (i < 5)?macroAddrs[i]:0;

		uint8_t macroData[1] = {0x00};	//create macro data buffer
		for(unsigned int i=0;i<universalDataSize_;++i) //fill with macro address and 0 fill
				data[i] = (i < 1)?macroData[i]:0;
		universalWrite((char *)addrs,(char *)data);
	}

	// delay(5000);
sleep(5000);


	// universalWrite(0x3,0x0);
	{
		uint8_t macroAddrs[1] = {0x03};	//create macro address buffer
		for(unsigned int i=0;i<universalAddressSize_;++i) //fill with macro address and 0 fill
				addrs[i] = (i < 1)?macroAddrs[i]:0;

		uint8_t macroData[1] = {0x00};	//create macro data buffer
		for(unsigned int i=0;i<universalDataSize_;++i) //fill with macro address and 0 fill
				data[i] = (i < 1)?macroData[i]:0;
		universalWrite((char *)addrs,(char *)data);
	}

	// delay(1000);
sleep(1000);


	// universalWrite(0x1800C,0xF);
	{
		uint8_t macroAddrs[3] = {0x0C, 0x80, 0x01};	//create macro address buffer
		for(unsigned int i=0;i<universalAddressSize_;++i) //fill with macro address and 0 fill
				addrs[i] = (i < 3)?macroAddrs[i]:0;

		uint8_t macroData[1] = {0x0F};	//create macro data buffer
		for(unsigned int i=0;i<universalDataSize_;++i) //fill with macro address and 0 fill
				data[i] = (i < 1)?macroData[i]:0;
		universalWrite((char *)addrs,(char *)data);
	}

	// universalWrite(0x404,0x3);
	{
		uint8_t macroAddrs[2] = {0x04, 0x04};	//create macro address buffer
		for(unsigned int i=0;i<universalAddressSize_;++i) //fill with macro address and 0 fill
				addrs[i] = (i < 2)?macroAddrs[i]:0;

		uint8_t macroData[1] = {0x03};	//create macro data buffer
		for(unsigned int i=0;i<universalDataSize_;++i) //fill with macro address and 0 fill
				data[i] = (i < 1)?macroData[i]:0;
		universalWrite((char *)addrs,(char *)data);
	}

	// universalWrite(0x402,0x7);
	{
		uint8_t macroAddrs[2] = {0x02, 0x04};	//create macro address buffer
		for(unsigned int i=0;i<universalAddressSize_;++i) //fill with macro address and 0 fill
				addrs[i] = (i < 2)?macroAddrs[i]:0;

		uint8_t macroData[1] = {0x07};	//create macro data buffer
		for(unsigned int i=0;i<universalDataSize_;++i) //fill with macro address and 0 fill
				data[i] = (i < 1)?macroData[i]:0;
		universalWrite((char *)addrs,(char *)data);
	}

	// universalWrite(0x404,0x0);
	{
		uint8_t macroAddrs[2] = {0x04, 0x04};	//create macro address buffer
		for(unsigned int i=0;i<universalAddressSize_;++i) //fill with macro address and 0 fill
				addrs[i] = (i < 2)?macroAddrs[i]:0;

		uint8_t macroData[1] = {0x00};	//create macro data buffer
		for(unsigned int i=0;i<universalDataSize_;++i) //fill with macro address and 0 fill
				data[i] = (i < 1)?macroData[i]:0;
		universalWrite((char *)addrs,(char *)data);
	}

	// universalWrite(0x1800E,0x55);
	{
		uint8_t macroAddrs[3] = {0x0E, 0x80, 0x01};	//create macro address buffer
		for(unsigned int i=0;i<universalAddressSize_;++i) //fill with macro address and 0 fill
				addrs[i] = (i < 3)?macroAddrs[i]:0;

		uint8_t macroData[1] = {0x55};	//create macro data buffer
		for(unsigned int i=0;i<universalDataSize_;++i) //fill with macro address and 0 fill
				data[i] = (i < 1)?macroData[i]:0;
		universalWrite((char *)addrs,(char *)data);
	}

	// universalWrite(0x6,0x0);
	{
		uint8_t macroAddrs[1] = {0x06};	//create macro address buffer
		for(unsigned int i=0;i<universalAddressSize_;++i) //fill with macro address and 0 fill
				addrs[i] = (i < 1)?macroAddrs[i]:0;

		uint8_t macroData[1] = {0x00};	//create macro data buffer
		for(unsigned int i=0;i<universalDataSize_;++i) //fill with macro address and 0 fill
				data[i] = (i < 1)?macroData[i]:0;
		universalWrite((char *)addrs,(char *)data);
	}

	// universalWrite(0x18008,0x100);
	{
		uint8_t macroAddrs[3] = {0x08, 0x80, 0x01};	//create macro address buffer
		for(unsigned int i=0;i<universalAddressSize_;++i) //fill with macro address and 0 fill
				addrs[i] = (i < 3)?macroAddrs[i]:0;

		uint8_t macroData[2] = {0x00, 0x01};	//create macro data buffer
		for(unsigned int i=0;i<universalDataSize_;++i) //fill with macro address and 0 fill
				data[i] = (i < 2)?macroData[i]:0;
		universalWrite((char *)addrs,(char *)data);
	}

	// universalWrite(0x7,0x100);
	{
		uint8_t macroAddrs[1] = {0x07};	//create macro address buffer
		for(unsigned int i=0;i<universalAddressSize_;++i) //fill with macro address and 0 fill
				addrs[i] = (i < 1)?macroAddrs[i]:0;

		uint8_t macroData[2] = {0x00, 0x01};	//create macro data buffer
		for(unsigned int i=0;i<universalDataSize_;++i) //fill with macro address and 0 fill
				data[i] = (i < 2)?macroData[i]:0;
		universalWrite((char *)addrs,(char *)data);
	}

	// universalWrite(0x204,0x3);
	{
		uint8_t macroAddrs[2] = {0x04, 0x02};	//create macro address buffer
		for(unsigned int i=0;i<universalAddressSize_;++i) //fill with macro address and 0 fill
				addrs[i] = (i < 2)?macroAddrs[i]:0;

		uint8_t macroData[1] = {0x03};	//create macro data buffer
		for(unsigned int i=0;i<universalDataSize_;++i) //fill with macro address and 0 fill
				data[i] = (i < 1)?macroData[i]:0;
		universalWrite((char *)addrs,(char *)data);
	}

	// universalWrite(0x202,0x7);
	{
		uint8_t macroAddrs[2] = {0x02, 0x02};	//create macro address buffer
		for(unsigned int i=0;i<universalAddressSize_;++i) //fill with macro address and 0 fill
				addrs[i] = (i < 2)?macroAddrs[i]:0;

		uint8_t macroData[1] = {0x07};	//create macro data buffer
		for(unsigned int i=0;i<universalDataSize_;++i) //fill with macro address and 0 fill
				data[i] = (i < 1)?macroData[i]:0;
		universalWrite((char *)addrs,(char *)data);
	}

	// universalWrite(0x204,0x1);
	{
		uint8_t macroAddrs[2] = {0x04, 0x02};	//create macro address buffer
		for(unsigned int i=0;i<universalAddressSize_;++i) //fill with macro address and 0 fill
				addrs[i] = (i < 2)?macroAddrs[i]:0;

		uint8_t macroData[1] = {0x01};	//create macro data buffer
		for(unsigned int i=0;i<universalDataSize_;++i) //fill with macro address and 0 fill
				data[i] = (i < 1)?macroData[i]:0;
		universalWrite((char *)addrs,(char *)data);
	}

	// universalWrite(0x5,0x9);
	{
		uint8_t macroAddrs[1] = {0x05};	//create macro address buffer
		for(unsigned int i=0;i<universalAddressSize_;++i) //fill with macro address and 0 fill
				addrs[i] = (i < 1)?macroAddrs[i]:0;

		uint8_t macroData[1] = {0x09};	//create macro data buffer
		for(unsigned int i=0;i<universalDataSize_;++i) //fill with macro address and 0 fill
				data[i] = (i < 1)?macroData[i]:0;
		universalWrite((char *)addrs,(char *)data);
	}

	// universalWrite(0x6,0x2);
	{
		uint8_t macroAddrs[1] = {0x06};	//create macro address buffer
		for(unsigned int i=0;i<universalAddressSize_;++i) //fill with macro address and 0 fill
				addrs[i] = (i < 1)?macroAddrs[i]:0;

		uint8_t macroData[1] = {0x02};	//create macro data buffer
		for(unsigned int i=0;i<universalDataSize_;++i) //fill with macro address and 0 fill
				data[i] = (i < 1)?macroData[i]:0;
		universalWrite((char *)addrs,(char *)data);
	}

	// universalWrite(0x104,0x1);
	{
		uint8_t macroAddrs[2] = {0x04, 0x01};	//create macro address buffer
		for(unsigned int i=0;i<universalAddressSize_;++i) //fill with macro address and 0 fill
				addrs[i] = (i < 2)?macroAddrs[i]:0;

		uint8_t macroData[1] = {0x01};	//create macro data buffer
		for(unsigned int i=0;i<universalDataSize_;++i) //fill with macro address and 0 fill
				data[i] = (i < 1)?macroData[i]:0;
		universalWrite((char *)addrs,(char *)data);
	}

	// universalWrite(0x304,0x1);
	{
		uint8_t macroAddrs[2] = {0x04, 0x03};	//create macro address buffer
		for(unsigned int i=0;i<universalAddressSize_;++i) //fill with macro address and 0 fill
				addrs[i] = (i < 2)?macroAddrs[i]:0;

		uint8_t macroData[1] = {0x01};	//create macro data buffer
		for(unsigned int i=0;i<universalDataSize_;++i) //fill with macro address and 0 fill
				data[i] = (i < 1)?macroData[i]:0;
		universalWrite((char *)addrs,(char *)data);
	}
}