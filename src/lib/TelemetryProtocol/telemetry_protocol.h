#pragma once

#define ELRS_TELEMETRY_TYPE_LINK  0x01
#define ELRS_TELEMETRY_TYPE_DATA  0x02
#define ELRS4_TELEMETRY_SHIFT 2
#define ELRS4_TELEMETRY_BYTES_PER_CALL 5
#define ELRS4_TELEMETRY_MAX_PACKAGES (255 >> ELRS4_TELEMETRY_SHIFT)
#define ELRS8_TELEMETRY_BYTES_PER_CALL 10 // some of this is consumed by LinkStats buuuut....
#define ELRS8_TELEMETRY_SHIFT 3
#define ELRS8_TELEMETRY_MAX_PACKAGES (255 >> ELRS8_TELEMETRY_SHIFT)

#define ELRS4_MSP_BYTES_PER_CALL 5
#define ELRS8_MSP_BYTES_PER_CALL 10
#define ELRS_MSP_BUFFER 65
#define ELRS_MSP_MAX_PACKAGES ((ELRS_MSP_BUFFER/ELRS4_MSP_BYTES_PER_CALL)+1)

#define AP_MAX_BUF_LEN  255
