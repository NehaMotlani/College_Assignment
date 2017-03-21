#lang racket
(require rackunit)
(provide
    vector-sum
	list-sum
	list-length
	member?
        map-sqr	
    )
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;usage: (vector-sum '#(1 2 3))->6
;;;purpose: used to find sum of components of a vector
;;;contract: vector
(define vector-sum(lambda (v)
                    (if(= (vector-length v) 0) 0
                    (+ (vector-ref v 0) (vector-sum (vector-drop v 1))))))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;usage: (list-sum '(1 2 3))->6
;;;purpose: used to find sum of elements of a list
;;;contract: list
(define list-sum(lambda (ln)
                  (if (null? ln) 0
                      (+ (list-ref ln 0) (list-sum ( rest ln))))))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;usage: (list-length '(1 2 3))->3
;;;purpose: used to find length of a list
;;;contract: list
(define list-length(lambda (ln)
                  (if (null? ln) 0
                      (+ 1 (list-length ( rest ln))))))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;usage: (member? '(a b c) c)->#t
;;;purpose: used to check if given element is present in the list
;;;contract: list and the element
(define member?(lambda ( ln x)
                  (if (null? ln) #f
                  (if (equal? (car ln) x) #t
                      (member? (list-tail ln 1) x)))))
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;usage: (map-sqr '(1 2 3)) -> '(1 4 9)
;;;purpose: to map squares of elements in the list
;;;contract: list
(define map-sqr(lambda (ln)
                  (if (null? ln) '()
                      (cons (* (car ln) (car ln)) (map-sqr ( rest ln))))))