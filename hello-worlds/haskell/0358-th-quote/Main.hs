{-# LANGUAGE TemplateHaskell #-}
import Language.Haskell.TH

genGreeting :: Q Exp
genGreeting = [| putStrLn "Hello, World!" |]

main :: IO ()
main = $(genGreeting)
