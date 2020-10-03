import 'dart:io';

void main() {
  print("Check whether a string is Palindrome or not :");
  print("---------------------------------------------------------------");
  print("Enter a String :");
  String word = stdin.readLineSync();
  if (isPalindrome(word)) {
    print("Word " + word + " is Palindrome");
  } else {
    print("Word " + word + " is not Palindrome");
  }
}

bool isPalindrome(String str) {
  String s = str.toLowerCase().replaceAll(RegExp(r'[\W_]'), '');
  return s == s.split('').reversed.join('');
}
