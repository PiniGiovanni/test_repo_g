var my_functions = require("../functions.js");

var expect = require('chai').expect;

describe('#sum()', function() {

	context('Sum values', function() {
		it('1+2 = 3', function() {
		  expect(my_functions.sum(1, 2)).to.equal(3)
		})
	  })

})

describe('#echo()', function() {

	context('echo zero', function() {
		it('echo 0 prints 0', function() {
		  expect(my_functions.echo(0)).to.equal(0)
		})
	  })

	context('echo basic', function() {
                it('echo 1 prints 1', function() {
                  expect(my_functions.echo(1)).to.equal(1)
                })
          })

})
