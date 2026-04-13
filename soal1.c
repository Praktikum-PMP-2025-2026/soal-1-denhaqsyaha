#include <stdio.h>

int main () {
    int izin, suhu, radiasi, jam;

    scanf("%d %d %d %d", &izin, &suhu, &radiasi, &jam);
    
    if (radiasi >= 6) {
        printf("\nTOLAK");
    } else if (suhu >= 390) {
        printf("\nKARANTINA");
    } else if (izin == 1 && (jam < 6 || jam > 20)) {
        printf("\nTOLAK");
    } else if (izin == 1) {
        printf("\nMASUK");
    } else if (izin == 2 && radiasi <= 2 && jam >= 8 && jam <= 20) {
        printf("\nMASUK");
    } else if (izin == 2) {
        printf("\nPEMERIKSAAN");
    } else if (izin == 3 && radiasi == 0 && suhu < 380) {
        printf("\nMASUK");
    } else {
        printf("\nTOLAK");
    }

    return 0;
}
