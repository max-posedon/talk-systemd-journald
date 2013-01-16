#include <stdlib.h>
#include <systemd/sd-journal.h>
int main() {
    int i=0, j=0;
    while(i<10 && j<10) {
        random()&1 ? ++i : ++j;
        sd_journal_send(
            "MESSAGE=(%d,%d)", i, j,
            "MESSAGE_ID=51141ddad48f4924aef970b1eab2af42",
            "I=%d", i, 
            "J=%d", j,
            NULL
        );
    }
    return 0;
}
