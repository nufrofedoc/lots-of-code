const findPI = n => {
    return (16 * Math.atan(1 / 5) - 4 * Math.atan(1 / 239)).toFixed(n);
};

console.log(findPI(30));
