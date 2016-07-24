#include <ctime>
#include <cstdio>
int main() {
    time_t czas;
    time( & czas );
    printf( "Czas lokalny: %s", asctime( localtime( & czas ) ) );
    printf( "Czas UTC: %s", asctime( gmtime( & czas ) ) );
    return 0;
}
