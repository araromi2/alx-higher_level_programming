#!/usr/bin/node
const args = process.argv;
let xTimes = Number(args[2]);
if (xTimes) {
  while (xTimes) {
    if (xTimes < 0) {
      break;
    }
    console.log('C is fun');
    xTimes--;
  }
} else {
  console.log('Missing number of occurrences');
}
