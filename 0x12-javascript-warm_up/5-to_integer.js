#!/usr/bin/node
const args = process.argv;
const integer = Number(args[2]);
if (integer) {
  console.log(`My number: ${integer}`);
} else {
  console.log('Not a number');
}
