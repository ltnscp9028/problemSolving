var reverse = function(x) {
  var r = Math.abs(x).toString().split("").reverse().join('')*1;
  return x>~(1<<31) || r>~(1<<31) ? 0 : x>0 ? r : -r;
};