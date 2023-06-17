class EventEmitter {
mp=new Map();
  subscribe(event, cb) {
    if(!this.mp.has(event)){
        this.mp.set(event,[]);
    }
      //agr hai tab
      let callbackList = this.mp.get(event);
      callbackList.push(cb);
      this.mp.set(event,callbackList);
    return {
        unsubscribe: () => {
         //remove
           let arr = this.mp.get(event);
           let position = arr.findIndex(cb);
            arr.splice(position,1);
            this.mp.set(event,arr);
        }
    };
  }

  emit(event, args = []) {
    let ans = this.mp.get(event);
      if(ans == null){
          return ans=[];
      }
      //return the emit
      return ans.map((fn)=>{
          return fn(...args)
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