#include <stdio.h>
int main() {
int i,j,n;
printf ("enter no. Of rows:");
scanf("%d",&n);
for(i=0;i<n;++i){
for(j=0;j<i;++j){
printf ("");
}
printf ("01\n");
}
return 0;
}
