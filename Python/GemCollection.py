def gems(a):
    c=max(a);
    tot=[];
    var=0
    for i in range(0,len(a)):
        while(i<len(a)):
            var=var+int(a[i]);
            a.insert(i,var);
            i=i+2;
        print(a);



lst=[]
T=int(input());
for i in range(0,T):
    N=int(input());
    a=input();
    a=a.split();
gems(a);
