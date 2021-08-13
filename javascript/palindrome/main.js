// Native functions
function palindrom(str) {
  str = str.toLowerCase().replace(/\s/g, '');
  return str === str.split('').reverse().join('');
}

// For loop
function palindromeFor(str) {
  const len = Math.floor(str.length / 2);
  for (let i = 0; i < len; ++i) {
    if (str[i] !== str[str.length - i - 1]) {
      return false;
    }
  return true;
  }
}

palindrome("racecar");
palindrome("test");
