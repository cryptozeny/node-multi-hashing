#include "yespower.h"

void yespower_hash(const char *input, char *output, uint32_t len) {
    static const yespower_params_t params = {
        .version = YESPOWER_1_0,
        .N = 2048,
        .r = 32,
        .pers = "Sugarchain: Decentralized Cryptocurrency for one-CPU-one-vote",
        .perslen = 61
    };
    yespower_tls( (yespower_binary_t*)input, len, &params, (yespower_binary_t*)output );
}

void yespowerr8_hash(const char *input, char *output, uint32_t len) {
    static const yespower_params_t params = {YESPOWER_0_5, 2048, 8, "Client Key", 10};
    yespower_tls( (yespower_binary_t*)input, len, &params, (yespower_binary_t*)output );
}

void yespowerr16_hash(const char *input, char *output, uint32_t len) {
    static const yespower_params_t params = {YESPOWER_0_5, 4096, 16, "Client Key", 10};
    yespower_tls( (yespower_binary_t*)input, len, &params, (yespower_binary_t*)output );
}

void yespowerr24_hash(const char *input, char *output, uint32_t len) {
    static const yespower_params_t params = {YESPOWER_0_5, 4096, 24, "JagaricoinR", 10};
    yespower_tls( (yespower_binary_t*)input, len, &params, (yespower_binary_t*)output );
}

void yespowerr32_hash(const char *input, char *output, uint32_t len) {
    static const yespower_params_t params = {YESPOWER_0_5, 4096, 32, "WaviBanana", 10};
    yespower_tls( (yespower_binary_t*)input, len, &params, (yespower_binary_t*)output );
}
