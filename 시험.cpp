#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
struct person{
	char name[11];
	int kor,eng,math;	
};
bool cmp(const person u,const person v){
		if (u.eng>v.eng){
			return true;
		}
		else if(u.kor == v.eng){
			if(u.eng<v.eng){
				return true;
			}
		}
		else if(u.eng<v.eng){
			if(u.math==v.math){
				return true;
			}
		}
		else if(u.eng<v.eng){
			if (u.math>v.math){
				return strcmp(u.name,v.name )<= 0;
		
				
			}
		}
		return false; 
	}
	

person a[100000];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %d %d %d",a[i].name,&a[i].eng,&a[i].math);
		
	}
	sort(a,a+n,cmp);
	for (int i=0;i<n;i++){
			
		printf("%s\n",a[i].name);
	}
	
}

