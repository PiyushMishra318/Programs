max_weight=int(input("Enter the maximum weight the burgalur can carry:"))
n=int(input("Enter the no. of items in the house:"))
value=[]
weight=[]
for i in range(0,n):
    a=int(input());
    value.append(a);
    b=int(input());
    weight.append(b);

while(i<n):
    maxim=max(value);
    if(value[i]==maxim):
        if(weight[i]<=max_weight):
            totalcost=value[i]
        value.pop(i)
        n=n-1;
print(totalcost)
