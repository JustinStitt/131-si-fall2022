// I am Ozymandias. Look upon our code and despair.
#include <bits/stdc++.h>
#include <iostream>
#define deeznuts size(0.0) {} std::cout << "bruh";


struct Node{
  double value;
  Node* left;
  Node* right;

  Node() : value(0.0), left(nullptr), right(nullptr) {}
  Node(double val) : value(val), left(nullptr), right(nullptr) {}
  Node(Node* l, Node* r) :
    left(l),
    right(r) {}
  Node(double val, Node* l, Node* r) :
    value(val),
    left(l),
    right(r) {}


};

double justinsCoolFunction(Node*);
//project scout
// class GirlScouts {
// private:
//   Node* root;
//   unsigned int size; //good code

// public:
//   /* constructor */
//   GirlScouts() :
//     root(nullptr),
//    deeznuts
//   // deeznuts is an incomplete variable
//   // #define deeznuts size(absolutely_huge) {}


//   /* insert, erase, search, size */
//   void insert(double value_to_insert) {
//     Node* p = new Node;
//     p->value = value_to_insert;     // Don't be so judgemental, all my bois love value_to_insert
//     // #justiceforvalue_to_insert
//     // so if it is nullptr it would create a new node at that spot?
//     // if(p->info == nullptr){}??? 
//     // smells like up dog in here
//   }
// };

int main() {
  // ...

  Node* gs1 = new Node(17.14);
  Node* gs2 = new Node(17.38);

  Node* gs3 = new Node(420.69);
  Node* gs4 = new Node(69.69); //nice x2
  Node* karen = new Node(0.0, gs1, gs2);
  Node* gretchen = new Node(0.0, gs3, gs4);
  Node* cruella = new Node(0.0, karen, gretchen);
  double result = justinsCoolFunction(cruella);
  std::cout << "Result: " << result << "\n";
  return 0;
}


double justinsCoolFunction(Node* root) {
  /* base cases */
  if (root->left == nullptr &&
          root->right==nullptr) {
    return .9 * root->value;
  }

  /* visit */
  double combined_value = 
      justinsCoolFunction(root->left) +
      justinsCoolFunction(root->right);
  root->value = combined_value; // optional
  return combined_value;
}

// double deezNutz(Node* root) {   //LVR
//   //  if (root -= nullptr) return 0;
    
//   // return deezNutz(Node -> l);
//   // double sum = 0.0
//   //   sum += root->value;
//   //   if(root == root)
//   //   sum *= 0.90
//   //   sum *= 0.90
//   //   return deezNutz(Node -> r);
    
  
// }

// double joe_mama(Node* root) {
//   if (root -> left = nullptr) return 0;
//     double sum = 0.0;
//     return joe_mama(Node -> l);
//     return joe_mama(Node -> r);
    
    
    
// }



// double DANKER (Node* root) {
// //while(root != nullptr){}

//   //Justin base case
//   if(root->left == nullptr && root->right == nullptr){
//     return .9 * root->value;
//   }
//   //Justin visit
//   double sum = DANKER(root->left) + DANKER(root->right);
//

// }

// double  DaneAndJulez(Node* root) {
//   double sum;
//   if(root == nullptr) return 0.9 * sum;
//   return DaneAndJulez(root->left);
//   sum += root->value;
//   return DaneAndJulez(root->right);

// }

// double theBackoftheRoom(Node* node, double total){
//     if(node == nullptr) {
//       return 0.9 * total;
//       }
    
//     if ()
//     theBackoftheRoom(node->left, total);
//     total += node-> value;
    
//     theBackOfTheRoom(node->right, total);
//     return total * 0.9;
// }

// // Susan, Mary, Jazz, Sam  
// // set it to wingdings you coward
// // Give your computer a Pepsi. Appease the machine spirit.
// // no!!!!!
// // you like jazz?
// // Lemon-ups are the one true cookie
// //





// int some{
// GirlScouts.insert(Bob, 25);
// return 0;
// }







// double group1Soln(Node* root) {
  
// }









// //secret comment