// Binary Search

let arr  = [1, 3, 5, 7, 44, 88, 91, 102, 392, 592, 1034, 1203];

function binarySearch(arr, item) {
    let start = 0, 
        middle = 0,
        finish = arr.length - 1;

    while (start <= finish) {
        middle = Math.floor((start + finish) / 2);
        if (arr[middle] == item) {
            return middle;
        } else if (arr[middle] > item) {
            finish = middle - 1;
        } else {
            start = middle + 1;
        }
    }
    return -1;
}

// Browser
//var time0 = performance.now();
//var result = binarySearch(arr, item);
//console.log(result);
//var time1 = performance.now();
//console.log("Call binarySearch took " + time1 - time0 + " milliseconds.");

// Node.js Time
var start = new Date();
var hrstart = process.hrtime();

setTimeout(function (argument){
  // execution time simulate with setTimeout function
  var end = new Date() - start,
      hrend = process.hrtime(hrstart);

  console.info("Execution time: %dms", end);
  console.info("Execution time(hr): %ds %dms", hrend[0], hrend[1]/100000);
}, 1);

// Result
let wasItFound = binarySearch(arr, 44);
console.info(wasItFound);
