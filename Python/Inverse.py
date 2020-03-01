
def check_no(a,N):
  count=0;
  for i in range(1,N-1):
      c=euler(val,a[i]);
      b.insert(i,c);
  for i in range(1,N-1):
    if(b[i]==1):
      count=count+1;
  print(count);

def euler(a,b):
  if(b!=0):
    flag=0;
    j=2;
    while(j <= a & j <= b):
        if(a%j==0 & b%j==0):
            flag=1;
            break;
        j=j+1;
    if(flag==0):
      return 1;
    else:
      return 0;
  else:
    return 0;


a=[];
b=[];
N=int(input());
val=N;
for i in range(1,N-1):
    a.insert(i,i);
check_no(a,N);
