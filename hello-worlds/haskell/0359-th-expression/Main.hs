{-# LANGUAGE TemplateHaskell #-}
import Language.Haskell.TH

main :: IO ()
main = $(return (AppE (VarE 'putStrLn) (LitE (StringL "Hello, World!"))))
