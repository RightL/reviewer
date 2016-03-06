#include <stdio.h>

void list_todo();
void add_todo();
void dele_todo();
void mark();

void main()
{
        printf("Things to do now\n");
        list_todo();
        char key = '';
        printf("a: add, d: dele, l: listagain, q: quit, m: mark\n");
        while() {
                fflush(stdin);
                key = getchar();
                fflush(stdin);
                switch (key) {
                case 'a': add_todo();break;
                case 'd': dele_todo();break;
                case 'l': list_todo();break;
                case 'q': return 0;break;
                case 'm': mark();break;
                default : printf("What?");
                }
        }
        return 0;
}

void list_todo()
{
}

void add_todo()
{
}

void dele_todo()
{
}

void mark()
{
}
