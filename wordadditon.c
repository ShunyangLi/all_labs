//Sam Lazarus z3291606 Charles z5139935
//wednesday 7pm victoria lab
//writes the sum of things in words
// this is new one

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int x, y, z;
    printf("Please enter two integers: ");
    scanf("%d %d", &x, &y);
    z = x + y;

    //printing the x value
    if (x < 0) {
        printf("negative ");
        if (x >= -10 && x < 0) {
            if (x == -10) {
                printf("ten");
            }
            else if (x == -9) {
                printf("nine");
            }
            else if (x == -8) {
                printf("eight");
            }
            else if (x == -7) {
                printf("seven");
            }
            else if (x == -6) {
                printf("six");
            }
            else if (x == -5) {
                printf("five");
            }
            else if (x == -4) {
                printf("four");
            }
            else if (x == -3) {
                printf("three");
            }
            else if (x == -2) {
                printf("two");
            }
            else if (x == -1) {
                printf("one");
            }
        } else {
            printf("%i", x);
        }
    } else if (x >= 0 && x <= 10) {
        if (x == 10) {
            printf("ten");
        } else if (x == 9) {
            printf("nine");
        } else if (x == 8) {
            printf("eight");
        } else if (x == 7) {
            printf("seven");
        } else if (x == 6) {
            printf("six");
        } else if (x == 5) {
            printf("five");
        } else if (x == 4) {
            printf("four");
        } else if (x == 3) {
            printf("three");
        } else if (x == 2) {
            printf("two");
        } else if (x == 1) {
            printf("one");
        } else if (x == 0) {
            printf("zero");
        }
    } else {
        printf("%d", x);
    }
    printf(" + ");
    if (y < 0) {
        printf("negative ");
        if (y >= -10 && y < 0) {
            if (y == -10) {
                printf("ten");
            } else if (y == -9) {
                printf("nine");
            } else if (y == -8) {
                printf("eight");
            } else if (y == -7) {
                printf("seven");
            } else if (y == -6) {
                printf("six");
            } else if (y == -5) {
                printf("five");
            } else if (y == -4) {
                printf("four");
            } else if (y == -3) {
                printf("three");
            } else if (y == -2) {
                printf("two");
            } else if (y == -1) {
                printf("one");
            }
        } else {
            printf("%i", y);
        }
    }
    else if (y >= 0 && y <= 10) {
        if (y == 10) {
            printf("ten");
        }else if (y == 9) {
            printf("nine");
        }else if (y == 8) {
            printf("eight");
        }else if (y == 7) {
            printf("seven");
        }else if (y == 6) {
            printf("six");
        }else if (y == 5) {
            printf("five");
        }else if (y == 4) {
            printf("four");
        }else if (y == 3) {
            printf("three");
        }else if (y == 2) {
            printf("two");
        }else if (y == 1) {
            printf("one");
        }else if (y == 0) {
            printf("zero");
        }
    }
    else {
        printf("%d", y);
    }
    printf(" = ");
    if (z < 0) {
        printf("negative ");
        if (z >= -10 && z < 0) {
            if (z == -10) {
                printf("ten");
            } else if (z == -9) {
                printf("nine");
            } else if (z == -8) {
                printf("eight");
            } else if (z == -7) {
                printf("seven");
            } else if (z == -6) {
                printf("six");
            } else if (z == -5) {
                printf("five");
            } else if (z == -4) {
                printf("four");
            } else if (z == -3) {
                printf("three");
            } else if (z == -2) {
                printf("two");
            } else if (z == -1) {
                printf("one");
            }
        } else {
            printf("%i", z);
        }
    }
    else if (z >= 0 && z <= 10) {
        if (z == 10) {
            printf("ten");
        } else if (z == 9) {
            printf("nine");
        } else if (z == 8) {
            printf("eight");
        } else if (z == 7) {
            printf("seven");
        } else if (z == 6) {
            printf("six");
        } else if (z == 5) {
            printf("five");
        } else if (z == 4) {
            printf("four");
        } else if (z == 3) {
            printf("three");
        } else if (z == 2) {
            printf("two");
        } else if (z == 1) {
            printf("one");
        } else if (z == 0) {
            printf("zero");
        }
    }
    else {
        printf("%d", z);
    }

    //print a new line
    printf("\n");
    
    return EXIT_SUCCESS;
}
