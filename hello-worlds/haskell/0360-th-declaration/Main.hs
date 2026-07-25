{-# LANGUAGE TemplateHaskell #-}
import Language.Haskell.TH

generateGreeting :: Q [Dec]
generateGreeting = do
    let greetingName = mkName "greeting"
    let body = NormalB (LitE (StringL "Hello, World!"))
    return [SigD greetingName (ConT ''String), ValD (VarP greetingName) body []]

generateGreeting

main :: IO ()
main = putStrLn greeting
