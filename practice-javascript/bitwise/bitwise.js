'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });

    main();
});

function readline() {
   return inputString[currentLine++];
}

function getLessThanK(n, k) {
    let x = 1, a = 1, b = 1, max = 0;

    while(1) {
        if (b <= n)
            b += 1;

        if (b > n) {
            a += 1;
            b = a + 1;
        }

        if (a === n) break;

        x = a & b;

        if (max < x && x < k)
            max = x;
    }

    return max;
}

function main() {
    const q = +(readline());

    for (let i = 0; i < q; ++i) {
        const [n, k] = readline().split(' ').map(Number);

        console.log(n, k);
    }
}
