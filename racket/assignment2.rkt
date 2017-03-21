#lang racket
(require racket/list)
(require rackunit)
(require racket/trace)
(define binary-and 
  (lambda (x y)
    (and x y)))

(define (all-satisfy predicate ls) 
  (reduce binary-and #t (map predicate ls)))

(define reduce(lambda (a ini ls)
                (if ( empty? ls)  ini
                    (reduce a (a ini (first ls)) (rest ls)))))                  
(provide reduce)
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define helper(lambda (a b) (cons b a)))
(define reverse(lambda ls
                  (reduce helper '() (first ls))))
(provide reverse)
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define helper1(lambda (a b) (+ 1 a)))
(define list-length(lambda ls
                     (reduce helper1 0 (first ls))))
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define compose(lambda (f g)
                 (lambda (x) ( f (g x)))))
(provide compose)

(define next-even? (compose even? add1))
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define mul2
 (lambda (x) (* x 2)))

(define helper2 (lambda (x) x))
(define compose*(lambda fns
                   (reduce compose helper2 fns)))
(provide compose*)
;;;(define add1(lambda x (+ 1 x)))

(define f (compose* add1 mul2 sub1))
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define list-map(lambda (a ini ls)
                  (not (empty? ls)
                  (begin
                   (reduce a ini (first ls))
                   (list-map (rest ls))))))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define equilateral-triangle-area
  (lambda (side)
    (* (/ (sqrt 3) 4) side side)))

(define square-area
  (lambda (side)
    (* side side)))

(define circle-area
  (lambda (radius)
    (* pi radius radius)))


(define square-perimeter
    (lambda (side)
        (* 4 side)))

(define equilateral-triangle-perimeter
    (lambda (side)
        (* 3 side)))

(define circle-perimeter
    (lambda (radius)
        (* 2 pi radius)))
;;;;;;;;;;;
(define triangle
  (lambda (no)
    (list 'triangle no)))
(provide triangle)

(define circle
  (lambda (no)
    (list 'circle no)))
(provide circle)

(define square
  (lambda (no)
    (list 'square no)))
(provide square)

(define triangle?
  (lambda (ls)
    (and (list? ls)
         (= 2 (length ls))
         (eq? (first ls)
             'triangle)
         (real? (second ls)))))
(provide triangle?)

(define square?
  (lambda (ls)
    (and (list? ls)
         (= 2 (length ls))
         (eq? (first ls)
             'square)
         (real? (second ls)))))
(provide square?)

(define circle?
  (lambda (ls)
    (and (list? ls)
         (= 2 (length ls))
         (eq? (first ls)
             'circle)
         (real? (second ls)))))
(provide circle?)

(define shape?(lambda (ls)
                (cond [(triangle? ls) '(triangle)] 
                      [(square? ls) '(square)]
                      [(circle? ls) '(circle)])))
(provide shape?)

(define area-triangle(lambda (ls)
                       (round (* (sqrt 3) (* (/ (second ls) 2) (/ (second ls) 2))))))
(provide area-triangle)

(define perimeter-triangle(lambda (ls)
                            (* 3 (second ls))))
(provide perimeter-triangle)

(define area-square(lambda (ls)
                     (* (second ls) (second ls))))
(provide area-square)

(define perimeter-square(lambda (ls)
                            (* 4 (second ls))))
(provide perimeter-square)

(define area-circle(lambda (ls)
                   (round (* pi (* (second ls) (second ls))))))
(provide area-circle)

(define perimeter-circle(lambda (ls)
                           (round (* pi (* 2 (second ls))))))
(provide perimeter-circle)

(define area(lambda (ls)
              (begin
                (if(triangle? ls) (* (round (sqrt 3)) (* (/ (second ls) 2) (/ (second ls) 2)))
                (if (square? ls) (* (second ls) (second ls))
                (  round (* pi (* (second ls) (second ls)))))))))
(provide area)

(define perimeter(lambda (ls)
              (begin
                (if(triangle? ls) (* 3 (second ls))
                 (if(square? ls) (* 4 (second ls))
                    (round  (* pi (* 2 (second ls)))))))))
(provide perimeter)      
