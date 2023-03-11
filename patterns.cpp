/*Example.1 - Draw pattern of "n". 
let n = 5;*/

#include<iostream>
using namespace std; 

int main(){
    int n = 4;
    int i = 1;
    while(i<=n){
        int j = 1;
        int k = 5;
        while(j<=k){
            cout<<" * ";
            j = j+1;
        } cout<<endl;
        i = i+1;
    }
    return 0;
}

/*Example 2. Draw below pattern
        1   1   1
        2   2   2
        3   3   3   */
#include<iostream>
using namespace std; 

int main(){
    int n = 3;
    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<" "<< i;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
    return 0;
} 

/* Example 3 - Print the given patter using while loop
        1 2 3 4
        1 2 3 4
        1 2 3 4
        1 2 3 4    */

#include<iostream>
using namespace std; 

int main(){
    int i = 1;
    int n = 4;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<" "<< j;
            j = j+1;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

/* Example 4 - Draw a patter
    4 3 2 1
    4 3 2 1
    4 3 2 1
    4 3 2 1 */

    #include<iostream>
    using namespace std; 
    
    int main(){
        int n = 4;
        int i = 1;
        while(i<=n){
            int j = 1;
            while(j<=n){
                cout<<" "<<n-j+1;
                j++;
            }
            cout<<endl;
            i++;
        }
        return 0;
    }

    /* Example 5 - Draw a patter
        1 2 3
        4 5 6
        7 8 9   */

        #include<iostream>
        using namespace std; 
        
        int main(){
            int i = 1;
            int n = 3;
            int count = 1;
            while(i<=n){
                int j = 1;
                while(j<=n){
                    cout<<" "<<count;
                    count = count+1;
                    j = j+1;
                }
                cout<<endl;
                i++;
            }
            return 0;
        }

        /* Exmple 6 - Draw pattern 
            *
            * *
            * * *
            * * * *     */

           #include<iostream>
           using namespace std; 
           
           int main(){
            int row = 1;
            int n = 4;
            while(row<=n){
                int colu = 1;
                while(colu<=row){
                    cout<<" * ";
                    colu++;
                }
                cout<<endl;
                row++;
            }
            return 0;
           }

    /* Example 7 - Draw pattern
            1
            2 2
            3 3 3
            4 4 4 4  */

            #include<iostream>
            using namespace std; 
            
            int main(){
                int n = 4;
                int i = 1;
                while(i<=n){
                    int j = 1;
                    while(j<=i){
                        cout<<" "<<i;
                        j++;
                    }
                    cout<<endl;
                    i++;
                }
                return 0;
            }

/* Example 8- Draw pattern 
        1
        2 3
        4 5 6
        7 8 9 10    */

        #include<iostream>
        using namespace std; 
        
        int main(){
            int n = 4;
            int i = 1;
            int count = 1;
            while(i<=n){
                int j = 1;
                while(j<=i){
                    cout<<" "<<count;
                    count = count+1;
                    j++;
                }
                cout<<endl;
                i++;
            }
            return 0;
        }

/* Example 9 - Draw pattern
        1
        2 3
        3 4 5
        4 5 6 7 */

#include<iostream>
using namespace std; 

int main(){
    int n = 4;
    int i = 1;
    while(i<=n){
        int j = 1;
        int val = i;

        while(j<=i){
            cout<<" "<<val;
            val = val+1;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

//- The second way of printing the pattern 
#include<iostream>
using namespace std; 

int main(){
    int n = 4;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<" "<<i+j-1;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

/* Example 10 - Draw below pattern 
        1
        2 1
        3 2 1
        4 3 2 1     */

        #include<iostream>
        using namespace std; 
        
        int main(){
            int n = 4;
            int i = 1;
            while(i<=n){
                int j = 1;
                while(j<=i){
                    cout<<" "<<i-j+1;
                    j = j+1;
                }
                cout<<endl;
                i++;
            }
            return 0;
        }

/* Example 11 - Draw a pattern
        A A A
        B B B
        C C C   */

        #include<iostream>
        using namespace std; 
        
        int main(){
            int n = 3;
            int i = 1;
            while(i<=n){
                int j = 1;
                while(j<=n){
                    char ch = 'A'+i-1; //- using char data type to convert int into character 
                    cout<<" "<<ch; //-- After converting we'll print 'ch' variable name.
                    j++;
                }
                cout<<endl;
                i++;
            }
            return 0;
        }

/* Example 12 - Draw pattern
        A B C 
        A B C
        A B C   */

        #include<iostream>
        using namespace std; 
        
        int main(){
            int i = 1;
            int n = 3;
            while(i<=n){
                int j = 1;
                char aa = 'A'+j-1;
                while(j<=n){
                char aa = 'A'+j-1;
                cout<<" "<<aa;
                j++;
                }
                cout<<endl;
                i++;
            }
            return 0;
        }

/* Example 13 - Draw pattern
        A B C
        D E F
        G H I     */

        #include<iostream>
        using namespace std; 
        
        int main(){
            int i = 1;
            int n = 3;
            char start = 'A';
            while(i<=n){
                int j = 1;
                while(j<=n){
                    cout<<" "<<start;
                    start = start+1;
                    j = j+1;
                }
                cout<<endl;
                i++;
            }
            return 0;
        }

/* Example 14 - Draw a pattern
        A B C
        B C D
        C D E*/

        #include<iostream>
        using namespace std; 
        
        int main(){
            int i = 1;
            int n = 3;
            while(i<=n){
                int j = 1;
                while(j<=n){
                    char ch = 'A'+i+j-2; //- formula derived in this "i+j-1+'A'-1 = 1 + 'A'-1" >> "'A'+i+j-2"
                    cout<<" "<<ch;
                    j++;
                }cout<<endl;
                i++;
            }
            return 0;
        }

/* Example 15 - Draw patter
        A
        B B
        C C C   */
        #include<iostream>
        using namespace std; 
        
        int main(){
            int i = 1;
            int n = 3;

            while(i<=n){
                int j = 1;
                while(j<=i){
                    char ch = 'A'+i-1;
                    cout<<" "<<ch;
                    j++;
                }
                cout<<endl;
                i++;
            }
            return 0;
        }

/* Example 16 - Draw a pattern 
        A
        B C
        D E F 
        G H I J*/

        #include<iostream>
        using namespace std; 
        
        int main(){
            int i = 1;
            int n = 4;
            char start = 'A';
            while(i<=n){
                int j = 1;
                while(j<=i){
                    cout<<" "<<start;
                    start = start+1;
                    j = j+1;
                }
                cout<<endl;
                i++;
            }
            return 0;
        }

/* Example 17 - Draw a pattern 
        A
        B C
        C D E
        D E F G  */
         
#include<iostream>
using namespace std; 

int main(){
    int i = 1;
    int n = 4;
    while(i<=n){
        int j = 1;
        while(j<=i){
            char ch = 'A'+i+j-2;
            cout<<" "<<ch;
            j++;
        }cout<<endl;
        i++;
    } 
    return 0;
}

/* Example 18 - Draw a pattern
        D 
        C D 
        B C D
        A B C D     */

#include<iostream>
using namespace std; 

int main(){
    int i = 1;
    int n = 4;
    
    while(i<=n){
        int j = 1;
        char start = 'A'+n-i; 
        while(j<=i){
            cout<<" "<<start;
            start = start+1;
            j++;
        }cout<<endl;
        i++;
    }
    return 0;
}

/* Example 19 - Draw a pattern 
            *
          * *
        * * * 
      * * * *     */

     #include<iostream>
     using namespace std; 
     
     int main(){
        int n;
        cout<<"Enter the value for n: "<<endl; // Taking input from the user 
        cin>>n;

        int i = 1;
        while(i<=n){
            int space = n-i; // First printing space before stars 
            while(space){
                cout<<" ";
                space = space-1;
            }
            int j = 1;
            while(j<=i){
                cout<<"*";
                j++;
            }
            cout<<endl;
            i++;
        }

        return 0;
     }

/* Example 20 - Draw a pattern
        * * * *
        * * *
        * * 
        *       */

#include<iostream>
using namespace std; 

int main(){
    int i = 1;
    int n = 4;
    while(i<=n){
        int j = 1;
        while(j<=n-i+1){ //- We created a formula "n-i+1" to see the relation between the columns and rows.
            cout<<"*";
            j++;
        }cout<<endl;
        i++;
    }
    return 0;
}

/*Example 21 - Draw a pattern 
    
    * * * * 
      * * *
        * *
          *        */

#include<iostream>
using namespace std; 

int main(){
    int i = 1;
    int n;
    cout<<"Enter the value for n: "<<endl;
    cin>>n;

    while(i<=n){
        int space = i-1;
        while(space){
            cout<<" ";
            space = space-1;
        }
        int j = 1;
        while(j<=n-i+1){
            cout<<"*";
            j++;
        }cout<<endl;
        i++;
    }
    return 0;
}

/*Example 22 - Draw a pattern 
    
    1 1 1 1
      2 2 2
        3 3
          4     */

#include<iostream>
using namespace std; 

int main(){
    int i = 1;
    int n = 4;
    while(i<=n){
        int space = i-1;
        while(space){
            cout<<" ";
            space = space-1;
        }
        int j = 1;
        while(j<=n-i+1){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    } 
    return 0;
}

/* Example 23 - Draw a pattern
         
         1
       2 2
     3 3 3
   4 4 4 4     */

#include<iostream>
using namespace std; 

int main(){
    int i = 1;
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    while(i<=n){
        int space = n-i;
        while(space){
            cout<<" ";
            space = space-1;
        }
        int j = 1;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}