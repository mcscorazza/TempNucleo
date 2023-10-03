#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/adc.h"

int main() {
    stdio_init_all();
    adc_init();
    adc_set_temp_sensor_enabled(true);
    adc_select_input(4);

    while(true) {
        const float fator_conversao = 3.3f / (1 << 12);
        uint16_t leitura_adc = adc_read();
        float adc_voltagem = leitura_adc * fator_conversao;
        float temp_nucleo = (27 - ((adc_voltagem - 0.706)/0.001721));
        printf("Leitura ADC: %u | Valor voltagem: %.5f V | Temperatura do Núcleo: %.2f .C\n", leitura_adc, adc_voltagem, temp_nucleo);
        sleep_ms(1000);
    }

    return 0;
}