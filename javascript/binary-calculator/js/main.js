const display  = document.getElementById('res');
const zeroBtn  = document.getElementById('btn0');
const oneBtn   = document.getElementById('btn1');
const clearBtn = document.getElementById('btnClr');
const equalBtn = document.getElementById('btnEql');
const ariBtns  = document.querySelectorAll('.ari');

var result = 0;
var operand1 = '';
var operand2 = '';
var operator = '';

zeroBtn.addEventListener('click', () => {
    display.innerText += '0';
});

oneBtn.addEventListener('click', () => {
    display.innerText += '1';
});

clearBtn.addEventListener('click', (e) => {
    let textDisplay = display.innerText;

    if (textDisplay === '') {
        return false;
    } else {
        display.innerText = '';
    }
});

ariBtns.forEach(item => {
    item.addEventListener('click', item => {
       ariOperations(item.target.innerText); 
    });
});

function ariOperations(operand) {
    if (display.innerText === '')
        return false;
    if (operator) {
        return false;
    } else {
        display.innerText += operand;
        let txtDis = display.innerText;
        operand1 = txtDis.substr(0, txtDis.length-1);
        operator = operand;
    }
}

equalBtn.addEventListener('click', () => {
    if (display.innerText === '' || operand1 === 0) {
        return false;
    } else {
        let txtDis = display.innerText;
        if (operator === '+') {
            operand2 = txtDis.substring(txtDis.indexOf('+')+1);
        } else if (operator === '-') {
            operand2 = txtDis.substring(txtDis.indexOf('-')+1);
        } else if (operator === '*') {
            operand2 = txtDis.substring(txtDis.indexOf('*')+1);
        } else if (operator === '/') {
            operand2 = txtDis.substring(txtDis.indexOf('/')+1);
        } else {
            operand2 = 0;
        }
        
        if (operand1 !== 0 && operand2 !== 0)
            result = evalExp();
        display.innerText = result;
        operator = '';
        result = 0;
        operand1 = '';
        operand2 = '';
    }
});

function evalExp() {
    let res;

    switch (operator) {
    case '+':
        res = binToDec(operand1) + binToDec(operand2);
        res = decToBin(res);
        break;
    case '-':
        res = binToDec(operand1) - binToDec(operand2);
        res = decToBin(res);
        break;
    case '*':
        res = binToDec(operand1) * binToDec(operand2);
        res = decToBin(res);
        break;
    case '/':
        res = binToDec(operand1) / binToDec(operand2);
        res = decToBin(res);
        break;
    default:
        console.log('What\'s the place???');
    }
    
    return res;
}

function binToDec(num) {
    return parseInt(num, 2);
}

function decToBin(num) {
    return Number(num).toString(2);
}
