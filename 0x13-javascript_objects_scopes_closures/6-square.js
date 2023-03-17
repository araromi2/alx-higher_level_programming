#!/usr/bin/node
const SquareP = require('./5-square');

class Square extends SquareP {
  charPrint (c) {
    if (c === undefined) {
      c = 'X';
    }
    for (let i = 0; i < this.height; i++) {
        let arr = '';
      for (let j = 0; j < this.width; j++) {
        arr += c;
      }
      console.log(arr);
    }
  }
}
module.exports = Square;
