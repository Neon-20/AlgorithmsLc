class EventEmitter {
     mp=new Map();
  subscribe(event, cb) {
     if(!this.mp.has(event)){
         this.mp.set(event,[]);
     }
      let callBackList = this.mp.get(event);
      callBackList.push(cb);
      this.mp.set(event,callBackList);
    return {
        unsubscribe: () => {
          let arr = this.mp.get(event);
          let position = arr.findIndex(cb)
          arr.splice(position,1);
          this.mp.set(event,arr);
        }
    };
  }

  emit(event, args = []) {
    let ans = this.mp.get(event)
    if(ans == null){
        ans=[];
    }
      return ans.map((fn)=>{
          return fn(...args);
      })
  }
}

/**
 * const emitter = new EventEmitter();
 *
 * // Subscribe to the onClick event with onClickCallback
 * function onClickCallback() { return 99 }
 * const sub = emitter.subscribe('onClick', onClickCallback);
 *
 * emitter.emit('onClick'); // [99]
 * sub.unsubscribe(); // undefined
 * emitter.emit('onClick'); // []
 */