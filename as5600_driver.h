#ifndef AS5600_DRIVER
#define AS5600_DRIVER


#define AS5600_ADDRESS_DEFAULT 0x6C 

#ifndef AS5600_ADDRESS
#define AS5600_ADDRESS AS5600_ADDRESS_DEFAULT
#endif /* AS5600_ADDRESS_DEFAULT */



extern void as5600_read_raw_angle(uint16_t* angle);





// READ/WRITE REGISTERS
#define AS5600_REG_ZMCO 0x00 // ZMCO register address
#define AS5600_REG_ZPOS 0x01 // ZPOS register address
#define AS5600_REG_MPOS 0x03 // MPOS register address
#define AS5600_REG_MANG 0x05 // MANG register address
#define AS5600_REG_CONF 0x07 // CONF register address

// READ-ONLY REGISTERS
#define AS5600_REG_STATUS 0x0B // STATUS register address
#define AS5600_REG_RAW_ANGLE 0x0C // RAW ANGLE register address
#define AS5600_REG_ANGLE 0x0E // ANGLE register address
#define AS5600_REG_AGC 0x1A // AGC register address
#define AS5600_REG_MAG 0x1B // MAG register address

// WRITE-ONLY REGISTERS
#define AS5600_REG_BURN 0xFF // BURN register address








#endif /* AS5600_DRIVER */
