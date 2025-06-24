void FirstFactorial(int);
void FirstFactorial(int num) {
  int f=1;
  while(num)
  {
    f=f*num;
    num--;
  }
   printf("%d",f);
}

int main(void) {

  int num;
  scanf("%d",&num);
  FirstFactorial(num);
  return 0;
}
