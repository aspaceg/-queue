/***p malloc((sizeof(*data) * x) + (sizeof(data) * y * x))
void *q;
q = p + (sizeof(*data) * x);
for (i = 0; i =< x * y; i ++)
  q += (sizeof(*data) * y);*/
#include <stdlib.h>


void create_op(op * oper, int n){
  int i;

  i = 0;
  oper->top = 1;
  oper->priority = malloc(sizeof(int) * n + 1);
  oper->symbol = malloc(sizeof(char) * n + 1);
  oper->symbol[0] = '@';
  oper->capacity  = n;
}
void get_op(op * oper, char x){
  if (x == '+'){
    oper->priority[oper->top] = 2;}
    if (x == '-'){
    oper->priority[oper->top] = 2;}
    if (x == '*'){
      oper->priority[oper->top] = 3;}
    if (x == '/'){
      oper->priority[oper->top] = 3;}
    if (x == '%'){
      oper->priority[oper->top] = 3;}
    if (x == '('){
      oper->priority[oper->top] = 100;}
    if (x == ')'){
      oper->priority[oper->top] = 1;}
}
void push_op(op * oper, char x){
  oper->symbol[oper->top] = x;
  if (x == '+'){
    oper->priority[oper->top] = 2;}
  if (x == '-'){
    oper->priority[oper->top] = 2;}
  if (x == '*'){
    oper->priority[oper->top] = 3;}
  if (x == '/'){
    oper->priority[oper->top] = 3;}
  if (x == '%'){
    oper->priority[oper->top] = 3;}
  if (x == '('){
    oper->priority[oper->top] = 1;}
  if (x == ')'){
    oper->priority[oper->top] = 1;}
}
op * pop_op(&op){
  return oper->symbol[ -- oper->top];
}


void create_numb(numb * number, int n){
  number->top = 0;
  number->symbol = malloc(sizeof(int) * n + 1);
  number->capacity  = n;
}
void push_numb(numb * number, int x){
  number->operand[++ number->top] = x;
  }
  numb * pop_numb(numb * numder){
    return number->operand[ -- number->top];
    }
void calculations(op * oper, numb * number){
  if (oper->symbol[top] == '+'){
    number->operand[top - 1] += number->operand[top]}
  if (oper->symbol[top] == '-'){
    number->operand[top - 1] -= number->operand[top]}
  if (oper->symbol[top] == '*'){
    number->operand[top - 1] *= number->operand[top]}
  if (oper->symbol[top] == '/'){
    number->operand[top - 1] /= number->operand[top]}
    if (oper->symbol[top] == '%'){
      number->operand[top - 1] %= number->operand[top]}
}
int get_value(char *str){
  int i;
  char * ch;

  i = 0;
  if ()
  while ((str[i] >= '0' && srt[i] <= '9') && str[i + 1] != ' '){
    ch[i] = str[i];
    i++;
  }
    push_nubm(number, ft_atoi(ch));




}
