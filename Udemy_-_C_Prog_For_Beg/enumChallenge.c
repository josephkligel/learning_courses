#include <stdio.h>

int main(){
    enum Company {
        GOOGLE,
        FACEBOOK,
        XEROX,
        YAHOO,
        EBAY,
        MICROSOFT
    };

    enum Company g = GOOGLE;
    enum Company x = XEROX;
    enum Company e = EBAY;

    printf("%d\n%d\n%d\n", x, g, e);

    return 0;
}