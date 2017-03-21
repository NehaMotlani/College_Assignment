#lang racket
(require racket/list)
;(define l1(list '()))
;(define l2(list '()))

;(define split-list(lambda (ls a)
;                   (begin
;                     (if (empty? ls) (cons l1 l2)
;                  (if (or (< (first ls) a) (= (first ls) a))
;                           (helper1 ls l1 a)
;                           (helper2 ls l2 a))))))
;(define helper1 (lambda ( ls l1 a)
;                  (begin 
;                  (append (first ls) l1)
;                  (split-list (rest ls) a))))
;
;(define helper2 (lambda (ls l2 a)
;                  (begin
;                  (append (first ls) l2)
;
;(let [(list l1) '()] l1)
;(let [(list l2) '()] l2)
(define helper(lambda (ls a l1 l2)
                (if (null? ls) 
                          (cons l1 (list l2))  
                (if(<= (first ls) a)
                    (begin
                      (set! l1 (append l1 (list (first ls))))
                      (helper (rest ls) a l1 l2)                       )
                    (begin
                      (set! l2 (append l2 (list (first ls))))
                      (helper (rest ls) a l1 l2)
                      )))))

(define split-list(lambda (ls a)
                    (helper ls a '() '())
                    ))

(provide split-list)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;(define l3(list '()))
;(define helper3 (lambda (ls l3)
;                  (if (not (empty? ls))
;                      (if (list? (first ls)) (helper3 (first ls) l3)
;                          (begin
;                          (set! l3 (cons (first ls) l3))
;                          (helper3 (rest ls) l3)
;                      (reverse l3)))
;                      )))
;(define flatten-list(lambda (ls)
;                       (helper3 ls '())                      
;                      ))
;(provide flatten-list)
;(define flatten-list(lambda ls
;                      (cond ((null? ls) '())
;                            ((list? (car ls))
;                                    (append (flatten-list (car ls) (flatten-list (cdr ls))))
;                                    (else (cons (car ls) (flatten-list (cdr ls))))
;                                    ))))
(define (flatten-list ls)
  (cond ((null? ls) '())
        ((list? (car ls))
         (append (flatten-list (car ls))
                 (flatten-list (cdr ls))))
        (else (append (list (car ls)) (flatten-list (cdr ls))))))  
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;(define map*(lambda (a ls)
;              (if (null? ls) '() 
;                  (if (list? (car ls))
;                      (map* a (car ls))
;                      (begin
;                      ;(display (a (car ls)))
;                      (cons (a (car ls)) (map* a (rest ls)))
;                      )))))
(define map*(lambda (a ls)
  (cond ((null? ls) '())
        ((list? (car ls))
         (cons (map* a (car ls))
                 (map* a (cdr ls))))
        (else (cons (a (car ls)) (map* a (cdr ls)))))))  
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
(define reduce(lambda (a ini ls)
                (if ( empty? ls)  ini
                    (reduce a (a ini (first ls)) (rest ls)))))                  
(provide reduce)

(define reduce* (lambda (a ini ls)
                  (begin
                    (set! ls(flatten-list ls))
                    (reduce a ini ls))))
                          