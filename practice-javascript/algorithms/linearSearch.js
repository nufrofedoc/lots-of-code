// Linear Search

var arr  = [1, 3, 5, 7, 44, 88, 91, 102, 392, 592, 1034, 1203];

function linearSearch(arr, item) {
    if (item == null)
        return -1;

    let i;
    for (i = 0; i < arr.length; i++) {
        if (arr[i] === item) return i;
    }
}

// Browser Time
//var time0 = performance.now();
//linearSearch(arr, item); // 0.15 ms
//var time1 = performance.now();
//console.log("Call to linearSearch took " + (time1 - time0) + " milliseconds.");

// Node.js Time
var start = new Date();
var hrstart = process.hrtime();

setTimeout(function (argument) {
  // execution time simulated with setTimeout function
  var end = new Date() - start,
  hrend = process.hrtime(hrstart);

  console.info("Execution time: %dms", end);
  console.info("Execution (hr): %ds %dms", hrend[0], hrend[1]/100000);
}, 1);

// Result
let wasItFound = linearSearch(arr, 102);
console.info(wasItFound);
