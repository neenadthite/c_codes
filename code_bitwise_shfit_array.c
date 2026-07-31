#include <stdio.h>
#include <stdint.h>


int main() {
    uint8_t hdr[4] = { 0x00,0x00,0x01,0x03 };
    uint16_t data, payload_len;
    if (1) {
        payload_len = hdr[2];
        payload_len = payload_len << 8;
        payload_len = payload_len + hdr[3];
    }
    return 0;
}