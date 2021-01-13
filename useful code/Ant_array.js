let antArray = (n) => {
  if(n == 0) return;
  antArray(n-1)
  let k = e = '1';
  for(let i = 0; i < n - 1; i++){
    k = e;
    e = '1';
    let w = k[0], c = 0;
    for(let q of k){
      if(w == q){
        c++;
      } else {
        w = q;
        e = e + c + q;
        c = 1;
      }
    }
    e = e + c;
  }
  console.log(e)
}
