
#include <iostream>
#include <string>
#include <map>
using namespace std;

map <string, string> f;


string func(int i){
    if(i==0) return "a";
    else if(i==1) return "b";
    else return "c";
}

int tochecksemigroup(){
    
    string left1, left2, right1, right2, lres, rres;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                left1 = func(i) + func(j);
                left2 = func(k);
                right1 = func(i);
                right2 = func(j) + func(k);
                lres = f[f[left1] + left2];
                rres = f[right1 + f[right2]];
                if(lres!= rres) return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int semnum=0;
    for(int i1=0;i1<3;i1++){
        for(int i2=0;i2<3;i2++){
            for(int i3=0;i3<3;i3++){
                for(int i4 =0;i4<3;i4++){
                    for(int i5=0;i5<3;i5++){
                        for(int i6=0;i6<3;i6++){
                            for(int i7=0;i7<3;i7++){
                                for(int i8=0;i8<3;i8++){
                                    for(int i9=0;i9<3;i9++){
                                        f["aa"] = func(i1);
                                        f["ab"] = func(i2);
                                        f["ac"] = func(i3);
                                        f["ba"] = func(i4);
                                        f["bb"] = func(i5);
                                        f["bc"] = func(i6);
                                        f["ca"] = func(i7);
                                        f["cb"] = func(i8);
                                        f["cc"] = func(i9);
                                        if(tochecksemigroup()){
                                            
                                            cout<<"Semigroup "<<++semnum<<endl;
                                            cout<<"  a b c "<<endl;
                                            
                                            cout<<"a|"<<func(i1)<<" "<<func(i2)<<" "<<func(i3)<<endl;
                                            cout<<"b|"<<func(i4)<<" "<<func(i5)<<" "<<func(i6)<<endl;
                                            cout<<"c|"<<func(i7)<<" "<<func(i8)<<" "<<func(i9)<<endl;
                                            cout<<endl;
                                        }
                                        
                                        
                                    }
                                    
                                    
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
   
    
    
    
}
