{-# LANGUAGE TemplateHaskell #-}
import Language.Haskell.TH (litE, stringL)
import Language.Haskell.TH.Syntax (runIO)

main :: IO ()
main = putStrLn $(litE (stringL "Hello, World!"))
