// Counter.js
import React, { Component } from 'react';
import DisplayCount from './DisplayCount';

class Counter extends Component {
  constructor(props) {
    super(props);
    this.state = {
      count: 0
    };
  }

  incrementCount = () => {
    this.setState({ count: this.state.count + 1 });
  };

  decrementCount = () => {
    this.setState({ count: this.state.count - 1 });
  };

  render() {
    return (
      <div>
        <h2>Counter</h2>
        <button onClick={this.incrementCount}>Increment</button>
        <button onClick={this.decrementCount}>Decrement</button>
        <p>Count: {this.state.count}</p>
        <DisplayCount count={this.state.count} />
      </div>
    );
  }
}

export default Counter;
