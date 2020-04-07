//Bryan Macias
//Unit 2 Assignment
//Dr_T Unit 2 COSC-1437 Starter 
/* Task -

Top level solution folder: C_STL_Library_YourLastName

create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <cassert> //for using assert
#include <stack> //for using stack
#include <set> //for using set
#include <utility> // using in pair
#include <map> // for map insert
using namespace std; 


// for the map insert: 
typedef map<string, int> MapT;                // define a variable type called MapT that is a map pair containing a string and an int
typedef MapT::const_iterator MapIterT;      // define a variable type called MapIterT that is a MapT

// needed for the predicate algorithm
//a function returning a bool is a predicate
//an abject wich overloads operator() to return bool is also a predicate
//some algorithms take predicates and do useful things with them
bool less_than_7(int value)
{
    return value < 7;
}

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 
{ 
  private:  
      vector<int> vec;
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      { 
        vec = v; 
      } 
      
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      }
      void printDoubles() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      }  
};

class MyClassVector2 { 
    vector<int> vec2; 
  
public: 
    MyClassVector2(vector<int> v) : vec2(v) 
    { 
    } 
    void print() 
    { 
        /// print the value of vector 
        for (int i = 0; i < vec2.size(); i++) 
            cout << vec2[i] << " "; 
    } 
}; 

class MyClassVector3 { 
    vector<int>& vec3; 
  
public: 
    // this is the right way to assign 
    // the reference of stl container 
    MyClassVector3(vector<int>& arr) 
        : vec3(arr) 
    { 
    } 
    void print() 
    { 
        /// print the value of vector 
        for (int i = 0; i < vec3.size(); i++) 
            cout << vec3[i] << " "; 
    } 
}; 


int main() 
{
    /****Section_Name***Vectors*/ 
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1);
    vd.push_back(2);
    vd.push_back(3);

    //add 3 elements to the vi vector
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);
    // add 3 elements to the vs vector
    vs.push_back("a");
    vs.push_back("b");
    vs.push_back("c");

    // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }

    //display the 3 elements in the vi vector
    cout << "\nValues in vi: \n";
    for(int vals : vi)
    {
      cout << vals << endl;
    }
   // display the 3 elements in the vs vector
    cout << "\nValues in vs: \n";
    for(string vals : vs)
    {
      cout << vals << endl;
    }

    /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

   cout << "\nVector_as_Class_Member" << endl; 
    vector<int> vec; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
        obj.print(); 
      
      //Continue with MyClassVector2 and MyClassVector3
   cout << "\nVector2_as_Class_Member" << endl; 
    vector<int> vec2; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector2 job(vec); 
        obj.print(); 

      //Example MyClassVector3
     cout << "\nVector3_as_Class_Member" << endl; 
    vector<int> vec3; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector3 pri(vec); 
        obj.print(); 
cout << "\n\n";
    /****Section_Name***STL_Iterators*/ 

//STL Iterators up to 10 elements.

  vector< int > vint ( 10 );//vector with 10 integer numbers (10 elements)
   vint[0] = 10;
   vint[1] = 20;
   vint[2] = 30;
   vint[3] = 40;
   vint[4] = 50;
   vint[5] = 60;
   vint[6] = 70;
   vint[7] = 80;
   vint[8] = 90;
   vint[9] = 100;
  
  //display elements of a vector
   vector< int >::iterator it;
   for( it = vint.begin(); it != vint.end(); ++it )
   {
     //like a pointer, an iterator is dereferenced to access the value of the element pointed by it:
     cout << " " << *it << endl;
   }

    /****Section_Name*** Stack*/
    //Write comments that help one better understand what the code is doing.

stack< int > st; // (defin) a stack name st of the data type int
//assert causes the program to terminate if the argument is false, can be used to provide an error message

  st.push( 100 );//push (add) number on the stack
  assert( st.size() == 1 ); // verify one element value
  assert( st.top() == 100 ); //verify element value, 
  //top() is used to reference the newest element of the stack

  st.top() = 456;// assign new value
  assert( st.top()== 456 );

  st.pop(); // remove newest element
  assert(st.empty() == true );// check if stack is empty


    /****Section_Name**** Set*/
    //Write the code as presented in: 3. std::set

//Sets are containers that store unique elements following a specific order.
  
    set< int > iset;      // initialize a set of ints named iset
     
    iset.insert( 11 );      // add the value 11 to iset
    iset.insert( -11 );     // add the value -11 to iset
    iset.insert( 55 );      // add the value 55 to iset
    iset.insert( 22 );      // add the value 22 to iset
    iset.insert( 22 );      // 22 already exists in iset, insert only adds the value if it does not exist
     
    if(iset.find( 55 ) != iset.end())   // if 55 does not exist in iset, add it
    {
        iset.insert( 55 );
    }
     
    assert( iset.size() == 4);          // make sure that iset contains 4 values (-11, 11, 22, and 55)
    set< int >::iterator it1;          // create a variable it for use in the for loop below to print values in iset
  
    cout << "\n For Loop for iset: " << endl;

    for(it1 = iset.begin(); it1 != iset.end(); it++)  // (IMPORTANT PART BRYAN) start at the beginning of iset and print every value in the set
    {                                               // will print in ascending order, because values in a set are stored that way
        cout << " " << *it;                         // it acts as an integer, while *it points to a value in iset
    }                                               // output to screen is " -11" " 11" " 22" " 55" ( -11 11 22 55)
    cout << "\nFor Loop ended." << endl;

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structure
    //Write comments that help one better understand what the code is doing.

// pairs are a container that holds two elements of either the same or different types
    // the two elements are referenced using the variable name followed by .first or .second
    // by uding the .first and .second command the pair operate just like normal variables
     
    pair< string, string > strstr;              // initialize a pair of two strings
    strstr.first = "Hello";                     // set first element to "Hello"
    strstr.second = "World";                    // set second element to "World"
     
    pair< int, string > intstr;                 // initialize a pair of an int and a string
    intstr.first = 1;                           // set the first element to 1
    intstr.second = "one";                      // set the second element to "one"
     
    pair< string, int > strint( "two", 2 );     // initialize a pair of a string and an int with values "two" and 2
    assert( strint.first == "two" );            // check to make sure the first element equals "two"
    assert( strint.second == 2 );               // check to make sure the second element equals 2
     

    /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert
    //Write comments that help one better understand what the code is doing.

    MapT amap; // initialize a variable called amap of type MapT
     
    // creates a pair called result that stores types MapIterT and bool
    // MapIterT now holds values "Fred" and 45, bool defaults to true
    pair< MapIterT, bool > result = amap.insert( make_pair( "Fred", 45 ) );
     
    assert( result.second == true );         // check to make sure result.second, the bool value is true
    assert( result.first->second == 45 );    // check to make sure the second value of first value of result is 45
     
    result = amap.insert( make_pair( "Fred", 45 ) );    // attempt to add new values to amap, which causes bool = false
 
    assert( result.second == false );        // check to make sure that result.second, the bool value is false
    assert( result.first->second == 45 );    // check to make sure that second value of the first value of result is 45
    /****Section_Name****Map_Summary*/
    //Write the code as presented in: 16. Map summary
    //Write comments that help one better understand what the code is doing.

//a map is a unique containt that holds unique pairs of keys and values

  map< string, string > phone_book;             // create a map called phone_book that holds values as pairs of strings
      phone_book["411"] = "Directory";                // add the pair 411 and Directory to phone_book
      phone_book["911"] = "Emergency";                // add the pair 911 and Emergency to phone_book
      phone_book["508-678-2811"] = "BCC";             // add the pair 508-678-2811 and BCC to phone_book
      
      if(phone_book.find("411") != phone_book.end())  // search phone_book for 411
      {
          phone_book.insert(make_pair(string("411"), string("Directory")));   // if not found, add the pair 411 and Directory to phone_book
      }
      
      assert(phone_book.size() == 3);                 // check to make sure that phone_book holds 3 pairs
      map< string, string >::const_iterator it2;     // create a variable it for use in the for loop below
      
      for(it2 = phone_book.begin(); it2 != phone_book.end(); ++it)  // run as many times as there are pairs in phone_book
      {
          cout << " " << it2->first << " " << it2->second << endl;  // print the first and second value of each pair in phone_book
      }                                                             // map stores values in numerical order rather that the order added
                                                                    // 411 will be first, then 508..., and 911 last
    /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example
    //Write comments that help one better understand what the code is doing.

//sort the range between two iterators.
  int arr[100];
      sort(arr, arr + 100);
      vector<int> v1;
      sort(v1.begin(), v1.end());//Sorts the elements in the range [first,last) into ascending order.
      
    /****Section_Name****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function
    //Write comments that help one better understand what the code is doing. 
vector<int> vPredA;
    int count_less = count_if(vPredA.begin(), vPredA.end(), less_than_7);
      
      
return 0; 
 }