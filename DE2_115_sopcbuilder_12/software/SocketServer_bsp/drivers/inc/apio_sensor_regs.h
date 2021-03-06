#ifndef __APIO_SENSOR_REGS_H
#define __APIO_SENSOR_REGS_H

#include <io.h> //Altera IOWR and IORD

// Registers address
#define ADDR_RED_THRESHOLD_MIN      0x00
#define ADDR_RED_THRESHOLD_MAX      0x04
#define ADDR_GREEN_THRESHOLD_MIN    0x08
#define ADDR_GREEN_THRESHOLD_MAX    0x0c
#define ADDR_BLUE_THRESHOLD_MIN     0x10
#define ADDR_BLUE_THRESHOLD_MAX     0x14

#define IORD_SENSOR_RED_THRESHOLD_MIN(base)         IORD(base, ADDR_RED_THRESHOLD_MIN)
#define IOWR_SENSOR_RED_THRESHOLD_MIN(base, dat)    IOWR(base, ADDR_RED_THRESHOLD_MIN, dat)
#define IORD_SENSOR_RED_THRESHOLD_MAX(base)         IORD(base, ADDR_RED_THRESHOLD_MAX)
#define IOWR_SENSOR_RED_THRESHOLD_MAX(base, dat)    IOWR(base, ADDR_RED_THRESHOLD_MAX, dat)

#define IORD_SENSOR_GREEN_THRESHOLD_MIN(base)        IORD(base, ADDR_GREEN_THRESHOLD_MIN)
#define IOWR_SENSOR_GREEN_THRESHOLD_MIN(base, dat)   IOWR(base, ADDR_GREEN_THRESHOLD_MIN, dat)
#define IORD_SENSOR_GREEN_THRESHOLD_MAX(base)        IORD(base, ADDR_GREEN_THRESHOLD_MAX)
#define IOWR_SENSOR_GREEN_THRESHOLD_MAX(base, dat)   IOWR(base, ADDR_GREEN_THRESHOLD_MAX, dat)

#define IORD_SENSOR_BLUE_THRESHOLD_MIN(base)         IORD(base, ADDR_BLUE_THRESHOLD_MIN)
#define IOWR_SENSOR_BLUE_THRESHOLD_MIN(base, dat)    IOWR(base, ADDR_BLUE_THRESHOLD_MIN, dat)
#define IORD_SENSOR_BLUE_THRESHOLD_MAX(base)         IORD(base, ADDR_BLUE_THRESHOLD_MAX)
#define IOWR_SENSOR_BLUE_THRESHOLD_MAX(base, dat)    IOWR(base, ADDR_BLUE_THRESHOLD_MAX, dat)

#define ADDR_RED_LOCATION_P1_X      0x18
#define ADDR_RED_LOCATION_P1_Y      0x1a
#define ADDR_RED_LOCATION_P2_X      0x1c
#define ADDR_RED_LOCATION_P2_Y      0x1e
#define ADDR_RED_LOCATION_P3_X      0x20
#define ADDR_RED_LOCATION_P3_Y      0x22
#define ADDR_RED_LOCATION_P4_X      0x24
#define ADDR_RED_LOCATION_P4_Y      0x26
#define ADDR_RED_LOCATION_P5_X      0x28
#define ADDR_RED_LOCATION_P5_Y      0x2a
#define ADDR_RED_LOCATION_P6_X      0x2c
#define ADDR_RED_LOCATION_P6_Y      0x2e
#define ADDR_RED_LOCATION_P7_X      0x30
#define ADDR_RED_LOCATION_P7_Y      0x32
#define ADDR_RED_LOCATION_P8_X      0x34
#define ADDR_RED_LOCATION_P8_Y      0x36
#define ADDR_GREEN_LOCATION_P1_X    0x38
#define ADDR_GREEN_LOCATION_P1_Y    0x3a
#define ADDR_GREEN_LOCATION_P2_X    0x3c
#define ADDR_GREEN_LOCATION_P2_Y    0x3e
#define ADDR_GREEN_LOCATION_P3_X    0x40
#define ADDR_GREEN_LOCATION_P3_Y    0x42
#define ADDR_GREEN_LOCATION_P4_X    0x44
#define ADDR_GREEN_LOCATION_P4_Y    0x46
#define ADDR_GREEN_LOCATION_P5_X    0x48
#define ADDR_GREEN_LOCATION_P5_Y    0x4a
#define ADDR_GREEN_LOCATION_P6_X    0x4c
#define ADDR_GREEN_LOCATION_P6_Y    0x4e
#define ADDR_GREEN_LOCATION_P7_X    0x50
#define ADDR_GREEN_LOCATION_P7_Y    0x52
#define ADDR_GREEN_LOCATION_P8_X    0x54
#define ADDR_GREEN_LOCATION_P8_Y    0x56
#define ADDR_BLUE_LOCATION_P1_X     0x58
#define ADDR_BLUE_LOCATION_P1_Y     0x5a
#define ADDR_BLUE_LOCATION_P2_X     0x5c
#define ADDR_BLUE_LOCATION_P2_Y     0x5e
#define ADDR_BLUE_LOCATION_P3_X     0x60
#define ADDR_BLUE_LOCATION_P3_Y     0x62
#define ADDR_BLUE_LOCATION_P4_X     0x64
#define ADDR_BLUE_LOCATION_P4_Y     0x66
#define ADDR_BLUE_LOCATION_P5_X     0x68
#define ADDR_BLUE_LOCATION_P5_Y     0x6a
#define ADDR_BLUE_LOCATION_P6_X     0x6c
#define ADDR_BLUE_LOCATION_P6_Y     0x6e
#define ADDR_BLUE_LOCATION_P7_X     0x70
#define ADDR_BLUE_LOCATION_P7_Y     0x72
#define ADDR_BLUE_LOCATION_P8_X     0x74
#define ADDR_BLUE_LOCATION_P8_Y     0x76
#define ADDR_YELLOW_LOCATION_P1_X     0x78
#define ADDR_YELLOW_LOCATION_P1_Y     0x7a
#define ADDR_YELLOW_LOCATION_P2_X     0x7c
#define ADDR_YELLOW_LOCATION_P2_Y     0x7e
#define ADDR_YELLOW_LOCATION_P3_X     0x80
#define ADDR_YELLOW_LOCATION_P3_Y     0x82
#define ADDR_YELLOW_LOCATION_P4_X     0x84
#define ADDR_YELLOW_LOCATION_P4_Y     0x86
#define ADDR_YELLOW_LOCATION_P5_X     0x88
#define ADDR_YELLOW_LOCATION_P5_Y     0x8a
#define ADDR_YELLOW_LOCATION_P6_X     0x8c
#define ADDR_YELLOW_LOCATION_P6_Y     0x8e
#define ADDR_YELLOW_LOCATION_P7_X     0x90
#define ADDR_YELLOW_LOCATION_P7_Y     0x92
#define ADDR_YELLOW_LOCATION_P8_X     0x94
#define ADDR_YELLOW_LOCATION_P8_Y     0x96
#define ADDR_PURPLE_LOCATION_P1_X     0x98
#define ADDR_PURPLE_LOCATION_P1_Y     0x9a
#define ADDR_PURPLE_LOCATION_P2_X     0x9c
#define ADDR_PURPLE_LOCATION_P2_Y     0x9e
#define ADDR_PURPLE_LOCATION_P3_X     0xa0
#define ADDR_PURPLE_LOCATION_P3_Y     0xa2
#define ADDR_PURPLE_LOCATION_P4_X     0xa4
#define ADDR_PURPLE_LOCATION_P4_Y     0xa6
#define ADDR_PURPLE_LOCATION_P5_X     0xa8
#define ADDR_PURPLE_LOCATION_P5_Y     0xaa
#define ADDR_PURPLE_LOCATION_P6_X     0xac
#define ADDR_PURPLE_LOCATION_P6_Y     0xae
#define ADDR_PURPLE_LOCATION_P7_X     0xb0
#define ADDR_PURPLE_LOCATION_P7_Y     0xb2
#define ADDR_PURPLE_LOCATION_P8_X     0xb4
#define ADDR_PURPLE_LOCATION_P8_Y     0xb6
#define ADDR_ORANGE_LOCATION_P1_X     0xb8
#define ADDR_ORANGE_LOCATION_P1_Y     0xba
#define ADDR_ORANGE_LOCATION_P2_X     0xbc
#define ADDR_ORANGE_LOCATION_P2_Y     0xbe
#define ADDR_ORANGE_LOCATION_P3_X     0xc0
#define ADDR_ORANGE_LOCATION_P3_Y     0xc2
#define ADDR_ORANGE_LOCATION_P4_X     0xc4
#define ADDR_ORANGE_LOCATION_P4_Y     0xc6
#define ADDR_ORANGE_LOCATION_P5_X     0xc8
#define ADDR_ORANGE_LOCATION_P5_Y     0xca
#define ADDR_ORANGE_LOCATION_P6_X     0xcc
#define ADDR_ORANGE_LOCATION_P6_Y     0xce
#define ADDR_ORANGE_LOCATION_P7_X     0xd0
#define ADDR_ORANGE_LOCATION_P7_Y     0xd2
#define ADDR_ORANGE_LOCATION_P8_X     0xd4
#define ADDR_ORANGE_LOCATION_P8_Y     0xd6

#define IORD_SENSOR_RED_LOCATION_P1_X(base)      IORD(base, ADDR_RED_LOCATION_P1_X)
#define IORD_SENSOR_RED_LOCATION_P1_Y(base)      IORD(base, ADDR_RED_LOCATION_P1_Y)
#define IORD_SENSOR_RED_LOCATION_P2_X(base)      IORD(base, ADDR_RED_LOCATION_P2_X)
#define IORD_SENSOR_RED_LOCATION_P2_Y(base)      IORD(base, ADDR_RED_LOCATION_P2_Y)
#define IORD_SENSOR_RED_LOCATION_P3_X(base)      IORD(base, ADDR_RED_LOCATION_P3_X)
#define IORD_SENSOR_RED_LOCATION_P3_Y(base)      IORD(base, ADDR_RED_LOCATION_P3_Y)
#define IORD_SENSOR_RED_LOCATION_P4_X(base)      IORD(base, ADDR_RED_LOCATION_P4_X)
#define IORD_SENSOR_RED_LOCATION_P4_Y(base)      IORD(base, ADDR_RED_LOCATION_P4_Y)
#define IORD_SENSOR_RED_LOCATION_P5_X(base)      IORD(base, ADDR_RED_LOCATION_P5_X)
#define IORD_SENSOR_RED_LOCATION_P5_Y(base)      IORD(base, ADDR_RED_LOCATION_P5_Y)
#define IORD_SENSOR_RED_LOCATION_P6_X(base)      IORD(base, ADDR_RED_LOCATION_P6_X)
#define IORD_SENSOR_RED_LOCATION_P6_Y(base)      IORD(base, ADDR_RED_LOCATION_P6_Y)
#define IORD_SENSOR_RED_LOCATION_P7_X(base)      IORD(base, ADDR_RED_LOCATION_P7_X)
#define IORD_SENSOR_RED_LOCATION_P7_Y(base)      IORD(base, ADDR_RED_LOCATION_P7_Y)
#define IORD_SENSOR_RED_LOCATION_P8_X(base)      IORD(base, ADDR_RED_LOCATION_P8_X)
#define IORD_SENSOR_RED_LOCATION_P8_Y(base)      IORD(base, ADDR_RED_LOCATION_P8_Y)
#define IORD_SENSOR_GREEN_LOCATION_P1_X(base)    IORD(base, ADDR_GREEN_LOCATION_P1_X)
#define IORD_SENSOR_GREEN_LOCATION_P1_Y(base)    IORD(base, ADDR_GREEN_LOCATION_P1_Y)
#define IORD_SENSOR_GREEN_LOCATION_P2_X(base)    IORD(base, ADDR_GREEN_LOCATION_P2_X)
#define IORD_SENSOR_GREEN_LOCATION_P2_Y(base)    IORD(base, ADDR_GREEN_LOCATION_P2_Y)
#define IORD_SENSOR_GREEN_LOCATION_P3_X(base)    IORD(base, ADDR_GREEN_LOCATION_P3_X)
#define IORD_SENSOR_GREEN_LOCATION_P3_Y(base)    IORD(base, ADDR_GREEN_LOCATION_P3_Y)
#define IORD_SENSOR_GREEN_LOCATION_P4_X(base)    IORD(base, ADDR_GREEN_LOCATION_P4_X)
#define IORD_SENSOR_GREEN_LOCATION_P4_Y(base)    IORD(base, ADDR_GREEN_LOCATION_P4_Y)
#define IORD_SENSOR_GREEN_LOCATION_P5_X(base)    IORD(base, ADDR_GREEN_LOCATION_P5_X)
#define IORD_SENSOR_GREEN_LOCATION_P5_Y(base)    IORD(base, ADDR_GREEN_LOCATION_P5_Y)
#define IORD_SENSOR_GREEN_LOCATION_P6_X(base)    IORD(base, ADDR_GREEN_LOCATION_P6_X)
#define IORD_SENSOR_GREEN_LOCATION_P6_Y(base)    IORD(base, ADDR_GREEN_LOCATION_P6_Y)
#define IORD_SENSOR_GREEN_LOCATION_P7_X(base)    IORD(base, ADDR_GREEN_LOCATION_P7_X)
#define IORD_SENSOR_GREEN_LOCATION_P7_Y(base)    IORD(base, ADDR_GREEN_LOCATION_P7_Y)
#define IORD_SENSOR_GREEN_LOCATION_P8_X(base)    IORD(base, ADDR_GREEN_LOCATION_P8_X)
#define IORD_SENSOR_GREEN_LOCATION_P8_Y(base)    IORD(base, ADDR_GREEN_LOCATION_P8_Y)
#define IORD_SENSOR_BLUE_LOCATION_P1_X(base)     IORD(base, ADDR_BLUE_LOCATION_P1_X)
#define IORD_SENSOR_BLUE_LOCATION_P1_Y(base)     IORD(base, ADDR_BLUE_LOCATION_P1_Y)
#define IORD_SENSOR_BLUE_LOCATION_P2_X(base)     IORD(base, ADDR_BLUE_LOCATION_P2_X)
#define IORD_SENSOR_BLUE_LOCATION_P2_Y(base)     IORD(base, ADDR_BLUE_LOCATION_P2_Y)
#define IORD_SENSOR_BLUE_LOCATION_P3_X(base)     IORD(base, ADDR_BLUE_LOCATION_P3_X)
#define IORD_SENSOR_BLUE_LOCATION_P3_Y(base)     IORD(base, ADDR_BLUE_LOCATION_P3_Y)
#define IORD_SENSOR_BLUE_LOCATION_P4_X(base)     IORD(base, ADDR_BLUE_LOCATION_P4_X)
#define IORD_SENSOR_BLUE_LOCATION_P4_Y(base)     IORD(base, ADDR_BLUE_LOCATION_P4_Y)
#define IORD_SENSOR_BLUE_LOCATION_P5_X(base)     IORD(base, ADDR_BLUE_LOCATION_P5_X)
#define IORD_SENSOR_BLUE_LOCATION_P5_Y(base)     IORD(base, ADDR_BLUE_LOCATION_P5_Y)
#define IORD_SENSOR_BLUE_LOCATION_P6_X(base)     IORD(base, ADDR_BLUE_LOCATION_P6_X)
#define IORD_SENSOR_BLUE_LOCATION_P6_Y(base)     IORD(base, ADDR_BLUE_LOCATION_P6_Y)
#define IORD_SENSOR_BLUE_LOCATION_P7_X(base)     IORD(base, ADDR_BLUE_LOCATION_P7_X)
#define IORD_SENSOR_BLUE_LOCATION_P7_Y(base)     IORD(base, ADDR_BLUE_LOCATION_P7_Y)
#define IORD_SENSOR_BLUE_LOCATION_P8_X(base)     IORD(base, ADDR_BLUE_LOCATION_P8_X)
#define IORD_SENSOR_BLUE_LOCATION_P8_Y(base)     IORD(base, ADDR_BLUE_LOCATION_P8_Y)
#define IORD_SENSOR_YELLOW_LOCATION_P1_X(base)     IORD(base, ADDR_YELLOW_LOCATION_P1_X)
#define IORD_SENSOR_YELLOW_LOCATION_P1_Y(base)     IORD(base, ADDR_YELLOW_LOCATION_P1_Y)
#define IORD_SENSOR_YELLOW_LOCATION_P2_X(base)     IORD(base, ADDR_YELLOW_LOCATION_P2_X)
#define IORD_SENSOR_YELLOW_LOCATION_P2_Y(base)     IORD(base, ADDR_YELLOW_LOCATION_P2_Y)
#define IORD_SENSOR_YELLOW_LOCATION_P3_X(base)     IORD(base, ADDR_YELLOW_LOCATION_P3_X)
#define IORD_SENSOR_YELLOW_LOCATION_P3_Y(base)     IORD(base, ADDR_YELLOW_LOCATION_P3_Y)
#define IORD_SENSOR_YELLOW_LOCATION_P4_X(base)     IORD(base, ADDR_YELLOW_LOCATION_P4_X)
#define IORD_SENSOR_YELLOW_LOCATION_P4_Y(base)     IORD(base, ADDR_YELLOW_LOCATION_P4_Y)
#define IORD_SENSOR_YELLOW_LOCATION_P5_X(base)     IORD(base, ADDR_YELLOW_LOCATION_P5_X)
#define IORD_SENSOR_YELLOW_LOCATION_P5_Y(base)     IORD(base, ADDR_YELLOW_LOCATION_P5_Y)
#define IORD_SENSOR_YELLOW_LOCATION_P6_X(base)     IORD(base, ADDR_YELLOW_LOCATION_P6_X)
#define IORD_SENSOR_YELLOW_LOCATION_P6_Y(base)     IORD(base, ADDR_YELLOW_LOCATION_P6_Y)
#define IORD_SENSOR_YELLOW_LOCATION_P7_X(base)     IORD(base, ADDR_YELLOW_LOCATION_P7_X)
#define IORD_SENSOR_YELLOW_LOCATION_P7_Y(base)     IORD(base, ADDR_YELLOW_LOCATION_P7_Y)
#define IORD_SENSOR_YELLOW_LOCATION_P8_X(base)     IORD(base, ADDR_YELLOW_LOCATION_P8_X)
#define IORD_SENSOR_YELLOW_LOCATION_P8_Y(base)     IORD(base, ADDR_YELLOW_LOCATION_P8_Y)
#define IORD_SENSOR_PURPLE_LOCATION_P1_X(base)     IORD(base, ADDR_PURPLE_LOCATION_P1_X)
#define IORD_SENSOR_PURPLE_LOCATION_P1_Y(base)     IORD(base, ADDR_PURPLE_LOCATION_P1_Y)
#define IORD_SENSOR_PURPLE_LOCATION_P2_X(base)     IORD(base, ADDR_PURPLE_LOCATION_P2_X)
#define IORD_SENSOR_PURPLE_LOCATION_P2_Y(base)     IORD(base, ADDR_PURPLE_LOCATION_P2_Y)
#define IORD_SENSOR_PURPLE_LOCATION_P3_X(base)     IORD(base, ADDR_PURPLE_LOCATION_P3_X)
#define IORD_SENSOR_PURPLE_LOCATION_P3_Y(base)     IORD(base, ADDR_PURPLE_LOCATION_P3_Y)
#define IORD_SENSOR_PURPLE_LOCATION_P4_X(base)     IORD(base, ADDR_PURPLE_LOCATION_P4_X)
#define IORD_SENSOR_PURPLE_LOCATION_P4_Y(base)     IORD(base, ADDR_PURPLE_LOCATION_P4_Y)
#define IORD_SENSOR_PURPLE_LOCATION_P5_X(base)     IORD(base, ADDR_PURPLE_LOCATION_P5_X)
#define IORD_SENSOR_PURPLE_LOCATION_P5_Y(base)     IORD(base, ADDR_PURPLE_LOCATION_P5_Y)
#define IORD_SENSOR_PURPLE_LOCATION_P6_X(base)     IORD(base, ADDR_PURPLE_LOCATION_P6_X)
#define IORD_SENSOR_PURPLE_LOCATION_P6_Y(base)     IORD(base, ADDR_PURPLE_LOCATION_P6_Y)
#define IORD_SENSOR_PURPLE_LOCATION_P7_X(base)     IORD(base, ADDR_PURPLE_LOCATION_P7_X)
#define IORD_SENSOR_PURPLE_LOCATION_P7_Y(base)     IORD(base, ADDR_PURPLE_LOCATION_P7_Y)
#define IORD_SENSOR_PURPLE_LOCATION_P8_X(base)     IORD(base, ADDR_PURPLE_LOCATION_P8_X)
#define IORD_SENSOR_PURPLE_LOCATION_P8_Y(base)     IORD(base, ADDR_PURPLE_LOCATION_P8_Y)
#define IORD_SENSOR_ORANGE_LOCATION_P1_X(base)     IORD(base, ADDR_ORANGE_LOCATION_P1_X)
#define IORD_SENSOR_ORANGE_LOCATION_P1_Y(base)     IORD(base, ADDR_ORANGE_LOCATION_P1_Y)
#define IORD_SENSOR_ORANGE_LOCATION_P2_X(base)     IORD(base, ADDR_ORANGE_LOCATION_P2_X)
#define IORD_SENSOR_ORANGE_LOCATION_P2_Y(base)     IORD(base, ADDR_ORANGE_LOCATION_P2_Y)
#define IORD_SENSOR_ORANGE_LOCATION_P3_X(base)     IORD(base, ADDR_ORANGE_LOCATION_P3_X)
#define IORD_SENSOR_ORANGE_LOCATION_P3_Y(base)     IORD(base, ADDR_ORANGE_LOCATION_P3_Y)
#define IORD_SENSOR_ORANGE_LOCATION_P4_X(base)     IORD(base, ADDR_ORANGE_LOCATION_P4_X)
#define IORD_SENSOR_ORANGE_LOCATION_P4_Y(base)     IORD(base, ADDR_ORANGE_LOCATION_P4_Y)
#define IORD_SENSOR_ORANGE_LOCATION_P5_X(base)     IORD(base, ADDR_ORANGE_LOCATION_P5_X)
#define IORD_SENSOR_ORANGE_LOCATION_P5_Y(base)     IORD(base, ADDR_ORANGE_LOCATION_P5_Y)
#define IORD_SENSOR_ORANGE_LOCATION_P6_X(base)     IORD(base, ADDR_ORANGE_LOCATION_P6_X)
#define IORD_SENSOR_ORANGE_LOCATION_P6_Y(base)     IORD(base, ADDR_ORANGE_LOCATION_P6_Y)
#define IORD_SENSOR_ORANGE_LOCATION_P7_X(base)     IORD(base, ADDR_ORANGE_LOCATION_P7_X)
#define IORD_SENSOR_ORANGE_LOCATION_P7_Y(base)     IORD(base, ADDR_ORANGE_LOCATION_P7_Y)
#define IORD_SENSOR_ORANGE_LOCATION_P8_X(base)     IORD(base, ADDR_ORANGE_LOCATION_P8_X)
#define IORD_SENSOR_ORANGE_LOCATION_P8_Y(base)     IORD(base, ADDR_ORANGE_LOCATION_P8_Y)

#endif
