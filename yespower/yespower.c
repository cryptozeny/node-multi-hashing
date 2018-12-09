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
